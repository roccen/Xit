# Xit

Xit is a graphical tool for working with git repositories. The overall goals are:

  * A useful graphical interface for viewing and managing your repository
  * Stability and scalability - handle large repositories well (lots of commits and lots of files)
  * A well-organized codebase to facilitate continued development

# Background and current status

Xit began as a rewrite of GitX, born from a desire for a codebase that was easier to work with, thoroughly unit tested, etc. It is currently working towards 1.0 beta status, where all basic features are in place, with many more interesting features slated for the future.

# Roadmap

The plan is to have a concrete 1.0 milestone to provide a good foundation and firm direction moving forward. Version 1.0 will simply be a starting point covering basic usage:

  * History view graph
  * Sidebar for navigating branches, remotes, tags, and stashes
  * Viewing the diff of a selected commit
  * Basic git actions: staging, committing, remote push/pull

Plenty of advancements are on the post-1.0 list, like syntax highlighting and other diff view enhancements, file history and blame views, etc.

Some other ideas that I’m looking forward to working on (and using!):

  * Interacting with git hosting services (especially GitHub): discovering forks, viewing commits online, working with pull requests
  * Interactive rebase
  * Explore more ways to navigate and visualize the repository

Plenty of ideas and plans have been written down in the [Issues] section. Please feel free to comment and contribute.

  [Issues]: https://github.com/Uncommon/Xit/issues