//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NVMOrderRecommendFood, NVMOrderRecommendShop;

@interface NVMOrderRecommendFoodAndShop : NVMModel
{
    NVMOrderRecommendShop *_shop;
    NVMOrderRecommendFood *_food;
    long long _index;
}

+ (id)foodJSONTransformer;
+ (id)shopJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NVMOrderRecommendFood *food; // @synthesize food=_food;
@property(retain, nonatomic) NVMOrderRecommendShop *shop; // @synthesize shop=_shop;
- (void).cxx_destruct;
- (_Bool)isAvailable;

@end
