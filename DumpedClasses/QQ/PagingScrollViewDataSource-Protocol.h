//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PagingScrollView, PagingScrollViewItem;

@protocol PagingScrollViewDataSource <NSObject>
- (PagingScrollViewItem *)pagingScrollView:(PagingScrollView *)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInPagingScrollView:(PagingScrollView *)arg1;
@end

