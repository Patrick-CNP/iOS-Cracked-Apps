//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseModel.h"

@class NSArray<DGPSearchSuggestMatchModel>, NSString;

@interface DGPSearchSuggestRecommendModel : DGPBaseModel
{
    NSString *_fingerprint;
    NSArray<DGPSearchSuggestMatchModel> *_searchGJSuggestMatchs;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSArray<DGPSearchSuggestMatchModel> *searchGJSuggestMatchs; // @synthesize searchGJSuggestMatchs=_searchGJSuggestMatchs;
@property(copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (void).cxx_destruct;

@end

