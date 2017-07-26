//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, NSIndexPath, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;

@interface TBHLMenuCollectionViewFlowLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>
{
    _Bool _setUped;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPanGestureRecognizer *_panGesture;
    UIView *_cellFakeView;
    CADisplayLink *_displayLink;
    long long _menuScrollDirection;
    NSIndexPath *_reorderingCellIndexPath;
    struct CGPoint _reorderingCellCenter;
    struct CGPoint _cellFakeViewCenter;
    struct CGPoint _panTranslation;
    struct CGSize _cellSize;
    struct UIEdgeInsets _scrollTrigerEdgeInsets;
    struct UIEdgeInsets _scrollTrigePadding;
}

@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) _Bool setUped; // @synthesize setUped=_setUped;
@property(nonatomic) struct UIEdgeInsets scrollTrigePadding; // @synthesize scrollTrigePadding=_scrollTrigePadding;
@property(nonatomic) struct UIEdgeInsets scrollTrigerEdgeInsets; // @synthesize scrollTrigerEdgeInsets=_scrollTrigerEdgeInsets;
@property(nonatomic) struct CGPoint panTranslation; // @synthesize panTranslation=_panTranslation;
@property(nonatomic) struct CGPoint cellFakeViewCenter; // @synthesize cellFakeViewCenter=_cellFakeViewCenter;
@property(nonatomic) struct CGPoint reorderingCellCenter; // @synthesize reorderingCellCenter=_reorderingCellCenter;
@property(retain, nonatomic) NSIndexPath *reorderingCellIndexPath; // @synthesize reorderingCellIndexPath=_reorderingCellIndexPath;
@property(nonatomic) long long menuScrollDirection; // @synthesize menuScrollDirection=_menuScrollDirection;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *cellFakeView; // @synthesize cellFakeView=_cellFakeView;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)moveItemIfNeeded;
- (void)handlePanGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)autoScroll;
- (void)invalidateDisplayLink;
- (void)setUpDisplayLink;
- (void)setUpCollectionViewGesture;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
@property(nonatomic) __weak id <TBHLCollectionViewReorderableTripletLayoutDataSource> datasource;
@property(nonatomic) __weak id <TBHLCollectionViewDelegateReorderableTripletLayout> delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
