//
//  GetWeatherData.h
//  YXMWeather
//
//  Created by XianMingYou on 15/2/25.
//  Copyright (c) 2015年 XianMingYou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@protocol GetWeatherDataDelegate <NSObject>
- (void)weatherData:(id)object sucess:(BOOL)sucess;
@end


@interface GetWeatherData : NSObject


@property (nonatomic, weak)  id<GetWeatherDataDelegate> delegate;

/**
 *  地址信息
 */
@property (nonatomic, strong) CLLocation  *location;


/**
 *  城市ID号码
 */
@property (nonatomic, strong) NSString    *cityId;


/**
 *  开始获取网络数据 (开始获取定位数据的信息)
 */
- (void)startGetLocationWeatherData;


/**
 *  开始获取网络数据 (开始获取定位数据的信息)
 */
- (void)startGetCityIdWeatherData;


/**
 *  取消请求
 */
- (void)cancelRequest;

@end
