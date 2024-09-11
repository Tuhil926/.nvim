vim.g.mapleader = " "
vim.keymap.set("n", "<leader>pv", vim.cmd.Ex)


vim.keymap.set("v", "J", ":m '>+1<CR>gv=gv")
vim.keymap.set("v", "K", ":m '<-2<CR>gv=gv")

vim.keymap.set("n", "<C-d>", "<C-d>zz")
vim.keymap.set("n", "<C-u>", "<C-u>zz")
-- vim.keymap.set("i", "jj", "<Esc>")
-- vim.keymap.set("i", "<C-h>", "<Left>")
-- vim.keymap.set("i", "<C-l>", "<Right>")
-- vim.keymap.set("i", "<C-k>", "<Up>")
-- vim.keymap.set("i", "<C-j>", "<Down>")
vim.keymap.set("v", "<A-c>",'"+y')
vim.keymap.set("n", "<A-/>",':normal gcc<CR>')
vim.keymap.set("v", "<A-/>",'<Esc>:normal gvgc<CR>')

