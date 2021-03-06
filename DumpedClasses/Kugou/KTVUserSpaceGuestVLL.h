//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVUserSpaceGuestViewDataSource.h"
#import "KTVUserSpaceGuestViewDelegate.h"

@class KTVUserOpusViewModel, NSString;

@interface KTVUserSpaceGuestVLL : NSObject <KTVUserSpaceGuestViewDataSource, KTVUserSpaceGuestViewDelegate>
{
    id <KTVUserSpaceGuestVLLDelegate> _delegate;
    KTVUserOpusViewModel *_viewModel;
}

@property(retain, nonatomic) KTVUserOpusViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <KTVUserSpaceGuestVLLDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)emptyAction:(id)arg1;
- (void)userSpaceGuestView:(id)arg1 didSelectedHeaderSegmentAtIndex:(long long)arg2;
- (void)requestDataAgain:(id)arg1;
- (void)userSpaceGuestView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (void)userSpaceGuestView:(id)arg1 didSelectedCellAtIndexPath:(id)arg2;
- (id)opusAtIndexPath:(id)arg1;
- (unsigned long long)totalOpus;
- (unsigned long long)numberOfOpus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

