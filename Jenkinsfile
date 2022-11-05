pipeline {
    agent any

    stages {
        stage('Compile') {
            steps {
                echo 'compiling c program...'
                sh 'gcc add.c -o run'
            }
        }
        
        stage('Execute') {
            steps {
                echo 'compiling c program...'
                sh './run'
            }
        }
        
        stage('Deploy') {
            steps {
                echo 'deploying c program...'
            }
        }
    }
}

