package com.donann.domain;

import javax.annotation.Resource;

import org.springframework.scheduling.annotation.Scheduled;

import com.donann.spring.MyThread;

public class MyJob {


/*
 * 利用quartz框架
 * 使从0秒开始，每个十秒钟输出“520”
 */
	@Scheduled(cron="0/10 * * * * ?")
	public void test() {
		System.out.println("520");
		new MyThread().start();
	}
	
}
