//
//  LYUFix.h
//  LYUFix
//
//  Created by 吕陈强 on 2019/3/12.
//  Copyright © 2019 吕陈强. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LYUFix : NSObject
+ (instancetype)shared;

- (void)fix:(NSString *)js;

@end

NS_ASSUME_NONNULL_END
