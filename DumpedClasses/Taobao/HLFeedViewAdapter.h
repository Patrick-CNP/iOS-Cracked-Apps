//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HLFeedViewProtocol.h"

@class NSString;

@interface HLFeedViewAdapter : NSObject <HLFeedViewProtocol>
{
    id <HLFeedViewProtocol> _viewService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <HLFeedViewProtocol> viewService; // @synthesize viewService=_viewService;
- (void).cxx_destruct;
- (id)getBizSourceSubscribeButton;
- (id)getVideoListReadNumView;
- (id)getFeedCountView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

