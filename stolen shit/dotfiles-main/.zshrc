# History in cache directory:
HISTSIZE=1000
SAVEHIST=1000
HISTFILE=~/.zsh/history

# Adding /.local/bin path to zsh
export PATH=/home/glizzster/.local/bin:$PATH


bindkey -e
# End of lines configured by zsh-newuser-install
# The following lines were added by compinstall
zstyle :compinstall filename '/home/glizzster/.zshrc'

autoload -Uz compinit
compinit
# End of lines added by compinstall

# Enable Plugins
source ~/.zsh/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
source ~/.zsh/plugins/zsh-autosuggestions/zsh-autosuggestions.zsh

# Changing "ls" to "exa"
alias ls='exa -la'

# Neofetch 
neofetch

#Changing prompt to starship
eval "$(starship init zsh)"


