//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComponent.h"

@class SCIPView;

@interface SCIPCom : SBaseComponent
{
    SCIPView *_cipView;
}

@property(retain, nonatomic) SCIPView *cipView; // @synthesize cipView=_cipView;
- (void).cxx_destruct;
- (void)ciplViewClickPickupHelpAction:(id)arg1;
- (void)ciplViewSwitchAction:(id)arg1 OnOrOff:(_Bool)arg2;
- (void)initCIPView;
- (void)bind:(id)arg1;
- (void)updateCIPAvailableCount:(id)arg1;
- (void)reloadCIP;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (_Bool)defaultSwitchValue;
- (_Bool)canShowCIPView;

@end
