//
//  SearchResponseVO.m
//  DeepDetectChatBots
//
//  Created by yangboz on 25/03/2017.
//  Copyright © 2017 ___SMARTKIT.INFO___. All rights reserved.
//

#import "SearchResponseVO.h"

@implementation SearchResponseVO
@synthesize took,timeout,_shards,hits;
-(NSDictionary *)keyMapping {
    
    return [[NSDictionary alloc] initWithObjectsAndKeys:
            @"took", @"took",
            @"timeout", @"timeout",
            @"_shards", @"_shards",
            @"hits", @"hits",
            nil];
}
+(SearchResponseVO *)getModelFromDictionary:(NSDictionary *)dictionary {
    
    SearchResponseVO *obj = [[SearchResponseVO alloc] init];
    NSDictionary *mapping = [obj keyMapping];
    
    for (NSString *attribute in [mapping allKeys]){
        
        NSString *classProperty = [mapping objectForKey:attribute];
        NSString *attributeValue = [dictionary objectForKey:attribute];
        
        if (attributeValue!=nil&&!([attributeValue isKindOfClass:[NSNull class]])) {
            
            [obj setValue:attributeValue forKeyPath:classProperty];
        }
    }
    
    return obj;
    
}

@end
