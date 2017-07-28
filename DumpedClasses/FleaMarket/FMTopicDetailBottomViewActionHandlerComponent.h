//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMItemDetailBaseHandlerComponent.h"

#import "FMItemDetailBottomViewActionProtocol.h"
#import "UIActionSheetDelegate.h"

@class NSString;

@interface FMTopicDetailBottomViewActionHandlerComponent : FMItemDetailBaseHandlerComponent <UIActionSheetDelegate, FMItemDetailBottomViewActionProtocol>
{
}

- (void)deleteItem;
- (void)editItem;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)bottomViewAction;
- (void)setupEventListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
