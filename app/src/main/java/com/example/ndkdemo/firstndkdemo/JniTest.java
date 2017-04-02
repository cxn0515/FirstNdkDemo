package com.example.ndkdemo.firstndkdemo;

/**
 * Created by chengxiaonan on 2017/4/2.
 */

public class JniTest {
    static {
        System.loadLibrary("demo");
    }
    public native String getName();

}
