# Guide for using Git
## "Pushing" changes to the repo
1. `git add [path to files to add to the "index"]`
    Note: `git add .` will add the entire directory you're in.
2. `git commit -m "[message about what was changed]"`
3. `git push -u origin main`

## "Pulling" changes from the repo.
1. `git pull origin main`
2. `git commit -m "[commit message]"`

## In terms of branching:
+ Create branches *locally* by using `git branch [branch name]`
+ Switch branches *locally* by using `git switch [branch name]`
+ See existing branches *locally* (and which branch is currently selected) with `git branch -l`
+ See existing branches on the remote repository using `git branch -r`
+ Create a branch on the remote repository (github), use `git push -u origin [branch name]`
*Note:*
    *If the branch does not exist it will be created*
    *A branch needs to exist locally for it to be pushed to the remote repo*
