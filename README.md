git --git-dir="$HOME/Desktop/.git-cgui" --work-tree="$HOME/Desktop" init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
Initialized empty Git repository in /home/da/Desktop/.git-cgui/
(base) da@da:~/Desktop$ git --git-dir="$HOME/Desktop/.git-cgui" --work-tree="$HOME/Desktop" config core.worktree "$HOME/Desktop"
(base) da@da:~/Desktop$ nano ~/Desktop/.gitignore-cgui
(base) da@da:~/Desktop$ git --git-dir="$HOME/Desktop/.git-cgui" --work-tree="$HOME/Desktop" add gui.cpp
(base) da@da:~/Desktop$ git --git-dir="$HOME/Desktop/.git-cgui" --work-tree="$HOME/Desktop" add gui.cpp
(base) da@da:~/Desktop$ git remote add origin https://github.com/abdelrahman992-cpu/cgui.git
error: remote origin already exists.
(base) da@da:~/Desktop$ git --git-dir="$HOME/Desktop/.git-cgui" --work-tree="$HOME/Desktop" commit -m "Initial GUI project"
[master (root-commit) 1aeab9d] Initial GUI project
 1 file changed, 12 insertions(+)
 create mode 100644 gui.cpp
(base) da@da:~/Desktop$ git --git-dir="$HOME/Desktop/.git-cgui" remote add origin https://github.com/abdelrahman992-cpu/cgui.git
(base) da@da:~/Desktop$ git --git-dir="$HOME/Desktop/.git-cgui" remote -v
origin	https://github.com/abdelrahman992-cpu/cgui.git (fetch)
origin	https://github.com/abdelrahman992-cpu/cgui.git (push)
(base) da@da:~/Desktop$ git remote set-url origin git@github.com:abdelrahman992-cpu/cgui.git
(base) da@da:~/Desktop$ git push origin master
