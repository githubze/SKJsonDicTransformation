//
//  SKJsonDicTransformation.h
//  https://github.com/githubze/SKJsonDicTransformation
//
//  Created by 徐泽 on 2018/9/6.
//  Copyright © 2018年 徐泽. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKJsonDicTransformation : NSObject

/**
 字典转JSON
 */
+ (NSString *)TransformationToJsonStringWithDictionary:(NSDictionary *)dict;

/**
 字典转Array
 */
+ (NSString *)TransformationToJsonStringWithArray:(NSArray *)array;

/**
 JSON转字典
 */
+ (NSDictionary *)TransformationToDictionaryWithJsonString:(NSString *)jsonString;

+ (NSString *)TransformationToJsonStringWithDictionary2:(NSDictionary *)dict;

@end
