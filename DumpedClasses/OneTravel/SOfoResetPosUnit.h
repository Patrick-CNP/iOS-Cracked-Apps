//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SResetPosCom.h"

@class SOfoBizDataSource;

@interface SOfoResetPosUnit : SResetPosCom
{
    SOfoBizDataSource *_dataSource;
}

@property(retain, nonatomic) SOfoBizDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)gongjiao_mapAnnotationsForWaitService;
- (void)gongjiao_resetActionForWaitService;
- (void)resetActionForWaitRsp;
- (void)resetActionForInService;
- (id)mapAnnotationsForWaitService;
- (void)locationButtonClick;
- (id)mapAnnotationsForHomeInConfirm;
- (struct CLLocationCoordinate2D)destAddrCoorForScene:(long long)arg1;
- (struct CLLocationCoordinate2D)startAddrCoorForScene:(long long)arg1;
- (void)bind:(id)arg1;

@end
