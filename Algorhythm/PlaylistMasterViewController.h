//
//  ViewController.h
//  Algorhythm
//
//  Created by Matthew D'Amore on 6/18/15.
//  Copyright (c) 2015 Matthew D'Amore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlaylistDetailViewController.h"
#import "Playlist.h"

@interface PlaylistMasterViewController : UIViewController

@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *playlistImageViews;

@end

