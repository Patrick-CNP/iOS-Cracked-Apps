//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GDMDarenMenuItem;

@interface GDMDarenMenuItemView : UIView
{
    GDMDarenMenuItem *_item;
    UIView *_displayView;
    _Bool _isVisible;
}

@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain) GDMDarenMenuItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)onCloseSubItemViewCallBack:(id)arg1;
- (void)onItemCallBack:(id)arg1;
- (void)onSubItemCallBack:(id)arg1;
- (void)hideSubItemViewVisiable:(id)arg1;
- (void)SetSubItemViewVisiable:(_Bool)arg1;
- (id)itemDisplayView;
- (void)onBackGorundNoftiication:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end

