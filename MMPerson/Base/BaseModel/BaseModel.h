//
//  BaseModel.h
//  MMPerson
//
//  Created by WDTechnology on 15/11/5.
//  Copyright © 2015年 WDTechnology. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseModel : NSObject
/**
 *  根据字典参数构建数据模型
 *
 *  @param dict 传入的字典参数
 *
 *  @return 返回单例
 */
-(instancetype)initWithDict:(NSDictionary*)dict;

@end
