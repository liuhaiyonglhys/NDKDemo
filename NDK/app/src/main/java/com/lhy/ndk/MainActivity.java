package com.lhy.ndk;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView = (TextView) findViewById(R.id.test);
        textView.setText(getStringFromNative());
    }
    public native String getStringFromNative();

    static {
        System.loadLibrary("MyJni");
    }


}
