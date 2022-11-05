pipeline {
    agent any

    stages {
        stage('Compile') {
            steps {
                echo 'compiling c program...'
                sh 'gcc main.c add.c -o final'
            }
        }
        stage('Run') {
            steps {
                echo 'executing c program...'
                sh './final'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying program...'
                sh 'exit'
            }
        }
        
    }
}

