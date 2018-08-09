# compile
javac -d target src/Main.java src/TestJni.java

# run
export LD_LIBRARY_PATH=/root/johnsontest/jnitest/c/target
java -cp target lgh.Main
