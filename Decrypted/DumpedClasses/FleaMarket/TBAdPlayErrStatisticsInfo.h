//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBErrorStatisticsBaseInfo.h"

@interface TBAdPlayErrStatisticsInfo : TBErrorStatisticsBaseInfo
{
    double adFailExposure;
    double adCount;
    double adFailCount;
}

@property(nonatomic) double adFailCount; // @synthesize adFailCount;
@property(nonatomic) double adCount; // @synthesize adCount;
@property(nonatomic) double adFailExposure; // @synthesize adFailExposure;
- (id)toMeasureValueSet;
- (id)toDictionary;

@end
