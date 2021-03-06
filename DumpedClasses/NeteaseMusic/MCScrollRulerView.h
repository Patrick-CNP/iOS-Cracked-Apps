//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class MCRulerUnitObject, NSMutableArray, NSString, UICollectionView, UIColor, UIImage, UIImageView;

@interface MCScrollRulerView : UIView <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_rulerView;
    UIImageView *_pointerView;
    NSMutableArray *_unitObjects;
    MCRulerUnitObject *_placeHolderUnitObject;
    _Bool _dragging;
    _Bool _contentSizeSetted;
    _Bool _scrollAfterContentSizeSetted;
    _Bool _showDialPlaceholder;
    float _minimumValue;
    float _maximumValue;
    float _step;
    float _value;
    id <MCScrollRulerViewDelegate> _delegate;
    UIColor *_shorterDialColor;
    UIColor *_longerDialColor;
    UIColor *_pointerColor;
    unsigned long long _style;
    unsigned long long _position;
    double _rulerHeightRatio;
    double _longerDialHeightRatio;
    double _shorterDialHeightRatio;
    unsigned long long _stepCountPerSection;
    unsigned long long _sectionCount;
    unsigned long long _visibleSectionCount;
}

@property(nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) float step; // @synthesize step=_step;
@property(nonatomic) unsigned long long visibleSectionCount; // @synthesize visibleSectionCount=_visibleSectionCount;
@property(nonatomic) unsigned long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(nonatomic) unsigned long long stepCountPerSection; // @synthesize stepCountPerSection=_stepCountPerSection;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) _Bool showDialPlaceholder; // @synthesize showDialPlaceholder=_showDialPlaceholder;
@property(nonatomic) double shorterDialHeightRatio; // @synthesize shorterDialHeightRatio=_shorterDialHeightRatio;
@property(nonatomic) double longerDialHeightRatio; // @synthesize longerDialHeightRatio=_longerDialHeightRatio;
@property(nonatomic) double rulerHeightRatio; // @synthesize rulerHeightRatio=_rulerHeightRatio;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIColor *pointerColor; // @synthesize pointerColor=_pointerColor;
@property(retain, nonatomic) UIColor *longerDialColor; // @synthesize longerDialColor=_longerDialColor;
@property(retain, nonatomic) UIColor *shorterDialColor; // @synthesize shorterDialColor=_shorterDialColor;
@property(nonatomic) __weak id <MCScrollRulerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)scrollToCurrentValue:(_Bool)arg1;
- (void)scrollToCurrentValueWithoutAnimation;
- (void)setCurrentValue:(float)arg1 notify:(_Bool)arg2;
- (double)sectionWidth;
- (float)currentValueFromScrollView;
@property(retain, nonatomic) UIImage *pointerImage;
- (void)setupPointerWithImage:(id)arg1;
- (void)setupStep;
- (void)setupStep:(_Bool)arg1;
- (void)setRulerViewFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

