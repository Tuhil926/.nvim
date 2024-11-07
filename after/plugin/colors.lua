function ColorMyPencils(color)
    color = color or 'rose-pine'
    vim.cmd.colorscheme(color)

    -- vim.api.nvim_set_hl(0, "Normal", {bg = "none"})
    -- vim.api.nvim_set_hl(0, "NormalFloat", {bg = "none"})
end

vim.cmd([[
    highlight GitGutterAdd    guifg=#009900 ctermfg=2
    highlight GitGutterChange guifg=#4477ff ctermfg=3
    highlight GitGutterDelete guifg=#ff2222 ctermfg=1
]])

-- vim.g.gitgutter_sign_added = '['

ColorMyPencils()
