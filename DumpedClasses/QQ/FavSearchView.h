//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TaggedSearchBar, UIButton;

@interface FavSearchView : UIView
{
    double _rightButtonWidth;
    TaggedSearchBar *_searchBar;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) TaggedSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)dealloc;
- (void)reloadAppearance;
- (void)adjust:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

