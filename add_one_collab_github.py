from github import Github
g = Github("a3416810202a7eb806e9cd1dd788bc675fa04d3f")
remote_repo_name="csc213-inclass-STL"

github_repo=g.get_user().get_repo(remote_repo_name)
github_repo.add_to_collaborators("hikmatfarhat")
