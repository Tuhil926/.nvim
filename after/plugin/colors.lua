function ColorMyPencils(color)
    color = color or 'rose-pine'
    vim.cmd.colorscheme(color)


    vim.api.nvim_set_hl(0, "Normal", { fg = "#dddddd", bg = "#060606" })
    vim.api.nvim_set_hl(0, "NormalFloat", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "LspFloatWinNormal", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "FloatBorder", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "TelescopeBorder", { bg = "#060606" })
    -- vim.api.nvim_set_hl(0, "TelescopePreviewNormal", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "TelescopeNormal", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "NormalNC", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "Visual", { bg = "#333339" })
    vim.api.nvim_set_hl(0, "hl-TabLineFill", { bg = "#000000" })
    vim.api.nvim_set_hl(0, "StatusLine", { bg = "#111115" })
    vim.api.nvim_set_hl(0, "StatusLineNC", { bg = "#111115" })
    vim.api.nvim_set_hl(0, "LineNr", { fg = "#757587" })
    vim.api.nvim_set_hl(0, "CursorLine", { bg = "#212125" })
    vim.api.nvim_set_hl(0, "Directory", { fg = "#5588ff" })
    -- vim.api.nvim_set_hl(0, "TelescopeTitle", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "TelescopeSelection", { bg = "#212125" })
    vim.api.nvim_set_hl(0, "TelescopeSelectionCaret", { bg = "#212125" })

    vim.api.nvim_set_hl(0, "Comment", { fg = "#757587" })
    -- vim.api.nvim_set_hl(0, "String", { fg = "#f6c177" })
    vim.api.nvim_set_hl(0, "Number", { fg = "#ccff88" })
    vim.api.nvim_set_hl(0, "@boolean", { fg = "#339999" })
    vim.api.nvim_set_hl(0, "@variable", { fg = "#aaeeff" })
    vim.api.nvim_set_hl(0, "@variable.builtin", { fg = "#b497d7", bold = true })
    --
    vim.api.nvim_set_hl(0, "@variable.member", { fg = "#bbeeee" })
    vim.api.nvim_set_hl(0, "@property", { fg = "#cfeedd" })
    vim.api.nvim_set_hl(0, "@constant", { fg = "#cc6600", bold=true})
    vim.api.nvim_set_hl(0, "@constant.builtin", { fg = "#bb6600", bold=true})
    vim.api.nvim_set_hl(0, "@constant.macro", { fg = "#bb6600", bold=true})
    --
    -- vim.api.nvim_set_hl(0, "@function.call", { fg = "#88dddd" })
    vim.api.nvim_set_hl(0, "@function.method.call", { fg = "#dd8800" })
    vim.api.nvim_set_hl(0, "@function.builtin", { fg = "#dd8800", bold = true })
    -- vim.api.nvim_set_hl(0, "@function", { fg = "#88dddd" })
    -- vim.api.nvim_set_hl(0, "@parameter", { fg = "#bbddff" })

    vim.api.nvim_set_hl(0, "@type", { fg = "#33ccaa" })
    vim.api.nvim_set_hl(0, "@constructor", { fg = "#33ccaa" })
    vim.api.nvim_set_hl(0, "@type.builtin", { fg = "#339999" })

    local keyword_colors = "#ff7777"
    vim.api.nvim_set_hl(0, "@keyword", { fg = keyword_colors })
    vim.api.nvim_set_hl(0, "@keyword.import", { fg = keyword_colors})
    vim.api.nvim_set_hl(0, "@keyword.repeat", { fg = keyword_colors })
    vim.api.nvim_set_hl(0, "@keyword.operator", { fg = keyword_colors })
    vim.api.nvim_set_hl(0, "@keyword.return", { fg = keyword_colors })
    vim.api.nvim_set_hl(0, "@keyword.exception", { fg = keyword_colors })
    vim.api.nvim_set_hl(0, "@keyword.conditional", { fg = keyword_colors })
    vim.api.nvim_set_hl(0, "@keyword.conditional.ternary", { fg = keyword_colors })


    vim.api.nvim_set_hl(0, "Pmenu", { bg = "#060606" })
    vim.api.nvim_set_hl(0, "PmenuSel", { bg = "#333337" })
    vim.api.nvim_set_hl(0, "PmenuSbar", { bg = "#333337" })
    vim.api.nvim_set_hl(0, "PmenuThumb", { bg = "#555565" })

    -- vim.api.nvim_set_hl(0, "CmpItemKind", { bg = "#555565" })
end

vim.cmd([[
    highlight GitGutterAdd    guifg=#009900 ctermfg=2
    highlight GitGutterChange guifg=#5588ff ctermfg=3
    highlight GitGutterDelete guifg=#ff2222 ctermfg=1
]])

-- vim.g.gitgutter_sign_added = '['

ColorMyPencils()
