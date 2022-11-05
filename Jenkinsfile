pipeline {
    agent any

    stages {
        stage('Run') {
            steps {
                echo 'compiling & executing c program...'
                sh 'make'
            }
        }
        
        stage('Deploy') {
            steps {
                echo 'deploying c program...'
            }
        }
    }
}

