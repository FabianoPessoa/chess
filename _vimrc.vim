"---- Coloca temas -----
":colorscheme blue
":colorscheme morning
":colorscheme darkblue
":colorscheme shine
":colorscheme delek
":colorscheme  koehler
":colorscheme evening

" --- Interface -----
:set showmatch
"numera as linha
:set nu
"--- Coloca o titulo em cima ---
:set title
:set showtabline=2
":tabnew
:set showmode
:set ruler
" Visualiza tab
:set list
:set listchars=tab:>.
" Forc,a quebra de linha
:set nowrap
" Apresenta n histo'rico
:set history=5
" Mostra as chaves parênteses ou colchetes pares
:setlocal sm
" Reporta ações com linhas no rodape
:setlocal report=0
"--- highlight para sintax ---
:syntax on
:syntax enable

" ---- Sair do Modo de Inserc,a'o e Comando ----
" ---sem usar o <esc>
" E' so' fazer [Ctrl] + [
" Ou Ctrl +c

" ------ Mudar de abas no Vi ------------------
" g (segura) + t    para ir para a aba da direita
" g (segura) _ T    para ir para a aba da esquerda
" -----------------------------------------
":vsplit
":tabnew
"Para mudar de tela <Ctrl> + w + w
":e! <outro co'digo/script
"---- Usando Substituic,a'o de co'digos ------
":imap <novoComando> <conjuntodeCo'digosSubstituidos>
":set syntax=vim
"set syntax=java
"set syntax=python
"set syntax=html
":imap 
"set syntax=c
":imap ( ();
":imap " "" 
":imap < <>
":imap { {}
":imap [ []
":imap /* /**/
"set syntax=txt
"set syntax=batch
"set syntax=sh
"?????
"set syntax=js
" Se a sintaxe na'ao funcionou
"Para controlar a sintaxe faça:
":set syntax="vim"		"para configurac,a'ca'o Vi
":set syntax="txt"		para textos comuns
":set syntax="py"		para programas python
":set syntax="c"			para programas em C
":set syntax="cpp"		para C++
":set syntax="tex"		para programs em LaTex
":set syntax="bat"		para programas em lote do windows .bat
":set syntax="java"		para Java
":set syntax="js"		para JavaScript
":set syntax="html"		para html
":set syntax="CSS"		para CSS
":set syntax="sql"		para DataBase SQL
"-------------------------------------------------------
:set showcmd
:set encoding=utf-8
":tabp
":tapn
:set incsearch
:set t_Co=256
"--- Na'o cria arquivo swap ---
:set nobackup
"------Deixa o u'ltimo tab
:set autoindent
" ignora caps lock
:set ignorecase
:set hlsearch
"--- Sistemas de Mouse -----
:set selectmode=mouse,key
:set mousemodel=popup
"Coloca o controle do cursor para o mouse
:set mouse=a
:set cursorline
"---------------------------
:set keymodel=startsel,stopsel
" Na'o compilou direito
":set selection=excluse
:set clipboard=unnamedplus
:set smartindent

"--- Converte o tab em espac,os em branco  ----
"ao teclar tab o vim ira' substituir por
"dois espac,os.

":set tabstop=2 softtabstop=4 expandtab shiftwidth=4

:set tabstop=2 
:set softtabstop=2 
:set shiftwidth=2

"tecle a barra de espac,o no modo normal para o Vim
"colapsar os co'digos.
":set foldmethod=syntax
":set foldlevel=99
"nnoremap <space> za
"na'o sei se vai funcionar
:let g:indentLine_enabled = 1
:map <c-k>i :IndentLinesToggle<cr>
:set wm=10
:set foldlevelstart=10
:set foldenable
:set wildmenu
" ---- Sair do Modo de Inserc,a'o e Comando ----
" ---sem usar o <esc>
" E' so' fazer [Ctrl] + [
" -----------------------------------------
":vsplit
":tabnew
"Para mudar de tela <Ctrl> + w + w
":e! <outro co'digo/script
"---- Usando Substituic,a'o de co'digos ------
":imap <novoComando> <conjuntodeCo'digosSubstituidos>
"======================================================
"----------------Comandos adicionais-------------------
" set clipboard to unnamed to access the system clipboard under windows
:set clipboard=unnamed           
:set wildmode=list:longest,longest:full   " Better command line completion
"-------------------------------------------------------------------------
if &term =~ 'xterm-256color'    " mintty identifies itself as xterm-compatible
  if &t_Co == 8
    set t_Co = 256              " Use at least 256 colors
  endif
  " set termguicolors           " Uncomment to allow truecolors on mintty
endif
"=========================================================
" ---------- Configurac,a'o de Arquivos -----------------
" ----------------------------------------------------
" Abre essa configurac,a'o
:e! _vimrc.vim
:tabnew
" ------Programa principal------
:e! main.c
:tabnew
" ------bitboard.c------
:e! bitboards.c
:tabnew
" -----------ihm-------------
:e! ihm.c
:tabnew
" -----------init.c--------
:e! init.c
:tabnew
" ------Definic,o'es-------
:e! defs.h
:tabnew
:e! Makefile
:tabnew
:e! readme.txt
:tabnew
:e! makefile
