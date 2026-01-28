/*
* https://www.github.com
*	create an account here with your student email - will be useful for the later classes
* 
* https://git-scm.com/install/windows
*	You'll need to install this and we'll walk through the installation again
* 
* 
*	TODO
*  Replacing fields with a default constructor
* 
*	global credentials - sometimes needed
*	depending on installation
* 
*	git config --global user.name "Your Name"
	git config --global user.email "your.email@example.com"
* 
* 
	Command Lines Notes

	pwd
		print working directory

	ls
		optional
			ls -la
			ls -ll
		listing out files and folders in the directory

	mkdir
		make directory
			when making files/folders in command line and you want to have spaces in the name, wrap the entire
			name in ""


	cd
		change directory
		cd pathToFolder

	touch
		touch "file name.txt"
		this creates files

	nano
		nano file
			this is a simple and easy text editor to use in command line
		
	mv
		will move the file
		Can also rename the file

	rm 
		-f
			be very wary about anything that starts with rm unless you know exactly what it is removing or going to remove


	git init
		Don't "nest" git inits i.e
			only git init in a project folder and nothing at a "parent" level or above that folder
			it can get complicated to undo pretty quickly
			Easist fix is to delete the .git folder of the "parent" directory


	git add -A
		adds files to be staged/commited

	git commit -m "" 
		creates a tag or version of the code you just commited

	git remote add NAME PATH
		creates a connection between local and remote repo

	git remove -v
		confirms the connections you have

	git status
		shows you the status of the files that are staged

	git push NAME branch
		will upload your staged/commited files to your remote rep

	git pull url
		https://github.com/krohrFS/JanOOPGame.git
		git pull https://github.com/krohrFS/JanOOPGame.git
			this will download our januaryoopgame example from github

	Note: 
		I would suggest downloading the git cli to test with as well
		
		The pull method above would require you to know the path/url prior








*/