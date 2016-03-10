//
//  AppVersionTools.h
//  MMPerson
//
//  Created by 徐文达 on 15/11/10.
//  Copyright © 2015年 徐文达. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppVersionTools : NSObject

/**
 *  是否储存过新版本
 *
 *  @return 返回比对结果
 */
+(BOOL)isHaveSaveVerison;
/**
 *  存储新版本
 */
+(void)saveNewVersion;

@end
