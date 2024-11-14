vim.api.nvim_create_autocmd('LspAttach', {
    group = vim.api.nvim_create_augroup('user_lsp_attach', { clear = true }),
    callback = function(event)
        local opts = { buffer = event.buf }

        vim.keymap.set('n', 'gd', function() vim.lsp.buf.definition() end, opts)
        vim.keymap.set('n', 'K', function() vim.lsp.buf.hover() end, opts)
        vim.keymap.set('n', '<leader>vws', function() vim.lsp.buf.workspace_symbol() end, opts)
        vim.keymap.set('n', '<leader>vd', function() vim.diagnostic.open_float() end, opts)
        vim.keymap.set('n', '[d', function() vim.diagnostic.goto_next() end, opts)
        vim.keymap.set('n', ']d', function() vim.diagnostic.goto_prev() end, opts)
        vim.keymap.set('n', '<leader>vca', function() vim.lsp.buf.code_action() end, opts)
        vim.keymap.set('n', '<leader>vrr', function() vim.lsp.buf.references() end, opts)
        vim.keymap.set('n', '<leader>vrn', function() vim.lsp.buf.rename() end, opts)
        vim.keymap.set('i', '<C-h>', function() vim.lsp.buf.signature_help() end, opts)
        vim.keymap.set('n', '<leader>f', function() vim.lsp.buf.format() end, opts)
    end,
})

local lsp_capabilities = require('cmp_nvim_lsp').default_capabilities()

require('mason').setup({})
require('mason-lspconfig').setup({
    ensure_installed = { 'rust_analyzer' },
    handlers = {
        function(server_name)
            require('lspconfig')[server_name].setup({
                capabilities = lsp_capabilities,
            })
        end,
        lua_ls = function()
            require('lspconfig').lua_ls.setup({
                capabilities = lsp_capabilities,
                settings = {
                    Lua = {
                        runtime = {
                            version = 'LuaJIT'
                        },
                        diagnostics = {
                            globals = { 'vim' },
                        },
                        workspace = {
                            library = {
                                vim.env.VIMRUNTIME,
                            }
                        }
                    }
                }
            })
        end,
    }
})

local cmp = require('cmp')
local cmp_select = { behavior = cmp.SelectBehavior.Select }

local kind_to_hl = {
    Function = "@function",
    Method = "@function.method.call",
    Variable = "@variable",
    Class = "@type",
    Interface = "@type",
    Keyword = "@keyword",
    Field = "@variable.member",
    Property = "@property",
    Text = "Normal",
    Constant = "@constant",
    -- Add more mappings as needed
}



for kind, hl_group in pairs(kind_to_hl) do
    local cmp_hl_group = "CmpItemKind" .. kind
    vim.api.nvim_set_hl(0, cmp_hl_group, { link = hl_group })
end

local kind_icons = {
    Function = "ƒ",
    Method = "m",
    Constructor = "⌘",
    Field = "▤",
    Variable = "𝑥",
    Class = "ℂ",
    Interface = "ι",
    Module = "⊞",
    Property = "⚙",
    Unit = "μ",
    Value = "ν",
    Enum = "∷",
    Keyword = "⌥",
    Snippet = "¶",
    Color = "◈",
    File = "",
    Reference = "※",
    Folder = "⌂",
    EnumMember = "≡",
    Constant = "π",
    Struct = "⊞",
    Event = "✶",
    Operator = "±",
    TypeParameter = "𝛕",
}

cmp.setup({
    formatting = {
        format = function(entry, vim_item)
            vim_item.kind = string.format('  %s  %s', kind_icons[vim_item.kind] or '', vim_item.kind)
            return vim_item
        end
    },
    sources = {
        { name = 'path' },
        { name = 'nvim_lsp' },
    },
    mapping = cmp.mapping.preset.insert({
        ['<C-p>'] = cmp.mapping.select_prev_item(cmp_select),
        ['<C-n>'] = cmp.mapping.select_next_item(cmp_select),
        ['<Tab>'] = cmp.mapping.confirm({ select = true }),
        ['<C-Space>'] = cmp.mapping.complete(),
    }),
})
