//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSMutableArray<DGPHomeBannerModel>, NSString;

@interface DGPHomeBannersResultModel : JSONModel
{
    NSMutableArray<DGPHomeBannerModel> *_banner;
    NSString *_flag;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSMutableArray<DGPHomeBannerModel> *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;

@end

