add_executable("getting-started-poisson-fem" getting-started-poisson-fem.cc)
target_link_dune_default_libraries("getting-started-poisson-fem")
dune_symlink_to_source_files(FILES l-shape.msh)