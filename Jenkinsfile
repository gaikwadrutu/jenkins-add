pipeline {
    agent any

    stages {
        stage('Run') {
            steps {
                echo 'compiling & executing c program...'
                sh 'gcc main.c add.c -o final'
            }
        }
    }
}

