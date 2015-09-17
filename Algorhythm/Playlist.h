//
//  Playlist.h
//  Algorhythm
//
//  Created by Matthew D'Amore on 6/19/15.
//  Copyright (c) 2015 Matthew D'Amore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistIconLarge;
@property (strong, nonatomic) NSArray *artists;
@property (strong, nonatomic) UIColor *background;

- (instancetype)initWithIndex:(NSUInteger)index;

@end
