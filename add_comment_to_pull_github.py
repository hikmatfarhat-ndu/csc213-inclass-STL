from github import Github
g = Github("a3416810202a7eb806e9cd1dd788bc675fa04d3f")
remote_repo_name="csc213-inclass-STL"

github_repo=g.get_user().get_repo(remote_repo_name)
issue=github_repo.get_issue(12)
f=open("example-content/output.md")
comment=f.read()
comment="&#67840;&#67841;&#67842;&#67843;&#67844;&#67845;"+comment
comment="&#10060;\n"+comment
comment=comment+"&#10004;\n"
issue.create_comment(comment)
