# NDKDemo
第一个NDK demo
#相关命令
javah -d jni -classpath C:\liuhaiyong\android\sdk\android-sdk_r24.3.4-windows\android-sdk-windows\platforms\android-19\android.jar;..\..\build\intermediates\classes\debug com.lhy.ndk.Main
inActivity                               
#相关配置 build.gradle
 sourceSets {
        main {
            jniLibs.srcDirs = ['libs']
        }
    }
  ndk{
            moduleName "MyJni"  //设置库(so)文件名称
            abiFilters "armeabi", "armeabi-v7a", "x86"
        }
build.properties:
			android.useDeprecatedNdk=true