require("tuhil")
vim.api.nvim_create_autocmd('TextYankPost', {
    desc = 'Highlight when yanking text',
    group = vim.api.nvim_create_augroup('kickstart-highlight-yank', { clear = true }),
    callback = function()
        vim.highlight.on_yank()
    end,
})

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.decibel = {
    install_info = {
        url = "~/.config/nvim/parser/tree-sitter-decibel",
        files = { "src/parser.c" },
        branch = "main",               -- default branch in case of git repo if different from master
        generate_requires_npm = false, -- if stand-alone parser without npm dependencies
        requires_generate_from_grammar = false,
    },
    filetype = "decibel", -- Define the file type for your language
    used_by = "dbl"
}

vim.cmd([[
  augroup DecibelFiletype
    autocmd!
    autocmd BufRead,BufNewFile *.decibel,*.dbl,*.in,*.correct,*.wrong set filetype=decibel
  augroup END
]])


vim.g.material_style = "deep ocean"
vim.g.gitgutter_sign_added = '▎'
vim.g.gitgutter_sign_modified = '▎'
vim.g.gitgutter_sign_removed = '▁'
vim.g.gitgutter_sign_removed_first_line = '▔'
vim.g.gitgutter_sign_modified_removed = '▎▁'

vim.g.netrw_bufsettings = 'noma nomod nu rnu nobl nowrap ro'
vim.g.netrw_liststyle = 3
