//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFaceFrameCollectionView.h"

@class NSString;

@interface QQFaceHistoryFrameView : QQFaceFrameCollectionView
{
    NSString *_uin;
    unsigned long long _currentPage;
}

- (id)cellForCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)LayoutInit;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)loadFaceForPage:(id)arg1;
- (void)freshUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

