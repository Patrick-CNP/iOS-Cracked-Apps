//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMItemDetailBaseHandlerComponent.h"

#import "FMItemDetailFishpondOperationProtocol.h"

@class NSString;

@interface FMItemDetailFishpondOperationHandlerComponent : FMItemDetailBaseHandlerComponent <FMItemDetailFishpondOperationProtocol>
{
}

- (void)shieldItem:(id)arg1;
- (void)stickItem;
- (void)selectItem;
- (void)goRecommend:(id)arg1;
- (void)recommendItem;
- (void)setupEventListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

