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
