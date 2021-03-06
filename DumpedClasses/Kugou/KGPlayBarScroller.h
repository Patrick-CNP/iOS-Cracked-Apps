//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class KGThemeImageView, NSArray, NSString, UIView;

@interface KGPlayBarScroller : UIScrollView <UIScrollViewDelegate>
{
    _Bool _bScrolled;
    UIView *_enabledDragView;
    NSArray *_views;
    CDUnknownBlockType _lyricShowHandleBlock;
    KGThemeImageView *_imgV;
}

@property(nonatomic) _Bool bScrolled; // @synthesize bScrolled=_bScrolled;
@property(retain, nonatomic) KGThemeImageView *imgV; // @synthesize imgV=_imgV;
@property(copy, nonatomic) CDUnknownBlockType lyricShowHandleBlock; // @synthesize lyricShowHandleBlock=_lyricShowHandleBlock;
@property(retain, nonatomic) NSArray *views; // @synthesize views=_views;
@property(retain, nonatomic) UIView *enabledDragView; // @synthesize enabledDragView=_enabledDragView;
- (void).cxx_destruct;
- (void)moveViewToShowWithRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)moveViewToShow:(id)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (_Bool)checkIsVisble;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)registNotification;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

