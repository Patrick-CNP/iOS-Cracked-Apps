//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KFSwipeCardView, KFSwipeCardViewCell, UIView;

@protocol KFSwipeCardViewDataSource <NSObject>
- (KFSwipeCardViewCell *)defaultCell:(KFSwipeCardView *)arg1 reusingView:(UIView *)arg2;
- (KFSwipeCardViewCell *)swipeCardView:(KFSwipeCardView *)arg1 itemForViewAtIndex:(long long)arg2 reusingView:(UIView *)arg3;
- (long long)numberOfItemsInSwipeCardView:(KFSwipeCardView *)arg1;
@end

