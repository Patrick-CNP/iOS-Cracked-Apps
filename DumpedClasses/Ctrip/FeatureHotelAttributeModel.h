//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface FeatureHotelAttributeModel : CTBusinessBean
{
    _Bool _isFeatureHotel;
    int _featureHotelType;
    int _serviceBitmap;
}

@property(nonatomic) int serviceBitmap; // @synthesize serviceBitmap=_serviceBitmap;
@property(nonatomic) int featureHotelType; // @synthesize featureHotelType=_featureHotelType;
@property(nonatomic) _Bool isFeatureHotel; // @synthesize isFeatureHotel=_isFeatureHotel;
- (id)getPBAnnotationArray;
- (id)init;

@end
