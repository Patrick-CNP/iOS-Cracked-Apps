//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGPBusRealtimeInfoModel, DGPLineLocationModel, DGPStopModel, NSString;

@interface DGPLineStopViewModel : NSObject
{
    _Bool _selected;
    _Bool _upperSelected;
    _Bool _fail;
    _Bool _realtimeAvailable;
    _Bool _nearest;
    DGPStopModel *_originStopModel;
    NSString *_realTimeInfo;
    DGPLineLocationModel *_lineLocationModel;
    DGPBusRealtimeInfoModel *_realTimeInfoModel;
}

@property(retain, nonatomic) DGPBusRealtimeInfoModel *realTimeInfoModel; // @synthesize realTimeInfoModel=_realTimeInfoModel;
@property(retain, nonatomic) DGPLineLocationModel *lineLocationModel; // @synthesize lineLocationModel=_lineLocationModel;
@property(retain, nonatomic) NSString *realTimeInfo; // @synthesize realTimeInfo=_realTimeInfo;
@property(nonatomic) _Bool nearest; // @synthesize nearest=_nearest;
@property(nonatomic) _Bool realtimeAvailable; // @synthesize realtimeAvailable=_realtimeAvailable;
@property(nonatomic) _Bool fail; // @synthesize fail=_fail;
@property(nonatomic) _Bool upperSelected; // @synthesize upperSelected=_upperSelected;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) DGPStopModel *originStopModel; // @synthesize originStopModel=_originStopModel;
- (void).cxx_destruct;

@end
