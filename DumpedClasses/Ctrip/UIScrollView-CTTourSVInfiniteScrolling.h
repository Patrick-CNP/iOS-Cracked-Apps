//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class CTTourSVInfiniteScrollingView;

@interface UIScrollView (CTTourSVInfiniteScrolling)
@property(nonatomic) _Bool tourShowsInfiniteScrolling;
@property(readonly, nonatomic) CTTourSVInfiniteScrollingView *tourInfiniteScrollingView; // @dynamic tourInfiniteScrollingView;
- (void)setInfiniteScrollingView:(id)arg1;
- (void)TourtriggerInfiniteScrolling;
- (void)addTourInfiniteScrollingWithActionHandler:(CDUnknownBlockType)arg1;
@end
