#!/usr/bin/env bash
set -e

{
	cat <<-'EOH'
	# This file lists all individuals having contributed content to the repository.
	Ana Cecilia Zapata Salas <https://github.com/ceciisalas>
	Cindy Ziemi <https://github.com/ziclude>

	EOH
	echo
	git log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf | grep -v "github.com"
} > AUTHORS
