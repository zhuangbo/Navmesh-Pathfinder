#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

char* get_commands(Navmesh *mesh, Character *character, Rect *current_rect, Rect *next_rect);
int sign(int x);

#endif // MOVE_H_INCLUDED
